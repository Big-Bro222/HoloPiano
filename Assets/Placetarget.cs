using UnityEngine;
using UnityEngine.XR.WSA;
using UnityEngine.XR.WSA.Persistence;

public class Placetarget : MonoBehaviour
{

    public string ObjectAnchorStoreName;

    WorldAnchorStore anchorStore;
    void Start()
    {
        //获取WorldAnchorStore 对象  
        WorldAnchorStore.GetAsync(AnchorStoreReady);
    }

    private void AnchorStoreReady(WorldAnchorStore store)
    {
        anchorStore = store;
        string[] ids = anchorStore.GetAllIds();
        //遍历之前保存的空间锚，载入指定id场景对象信息  
        for (int index = 0; index < ids.Length; index++)
        {
            if (ids[index] == ObjectAnchorStoreName)
            {
                WorldAnchor wa = anchorStore.Load(ids[index], gameObject);
                break;
            }
        }
    }

    // Update is called once per frame  
    void Update()
    {

    }

    void PlaceAnchor()
    {
        if (anchorStore == null)
        {
            return;
        }


            //当再次点击全息对象时，保存空间锚信息  
            WorldAnchor attachingAnchor = gameObject.AddComponent<WorldAnchor>();
            if (attachingAnchor.isLocated)
            {
                bool saved = anchorStore.Save(ObjectAnchorStoreName, attachingAnchor);
            }
            else
            {
                //有时空间锚能够立刻被定位到。这时候，给对象添加空间锚后，空间锚组件的isLocated属性  
                //值将会被设为true，这时OnTrackingChanged事件将不会被触发。因此，在添加空间锚组件  
                //后，推荐立刻使用初始的isLocated状态去调用OnTrackingChanged事件  
                attachingAnchor.OnTrackingChanged += AttachingAnchor_OnTrackingChanged;
            }
        
    }

    private void AttachingAnchor_OnTrackingChanged(WorldAnchor self, bool located)
    {
        if (located)
        {
            bool saved = anchorStore.Save(ObjectAnchorStoreName, self);
            self.OnTrackingChanged -= AttachingAnchor_OnTrackingChanged;
        }
    }
}