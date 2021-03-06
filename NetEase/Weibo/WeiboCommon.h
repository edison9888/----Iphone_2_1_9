

#import <Foundation/Foundation.h>

enum WeiboId{
    Weibo_Sina = 1,
    Weibo_Tencent = 2,
    Weibo_Netease = 4,
    Weibo_Sohu = 8,
    Weibo_Max
};

#define PublishMessageResultNotification          @"PublishMessageResultNotification"
#define PublishMessageBeginNotification           @"PublishMessageBeginNotification"
#define RefreshDataWhenUidNotNullNotification     @"RefreshDataWhenUidNotNullNotification"


//#define KEY_NETEASE @"SfU6vfFvxjMO79RO"
//#define SECRETKEY_NETEASE  @"TQpjYb9BNmCwIA6QOAR51Oze5FpY8h9u"
#define KEY_SOHU    @"EoF8DjcICTx5zTU2wtnB"
#define SECRETKEY_SOHU   @"3ec7HBNrviCdncUydm5kW-zFqC#7G8fzgyhj9Bzv"
#define KEY_TENCENT	@"801110582"
#define SECRETKEY_TENCENT	@"cf45ab5a55c87ff13dfa20f530bde3ec"
#define KEY_SINA	@"453294438"
#define SECRETKEY_SINA	@"a2d8ed7ec2e669b739d58361dfcf07bf"


@interface WeiboCommon : NSObject {
    
}
/*
 根据blogid来保存字典信息
 */
+ (void)saveWeiboInfo:(NSDictionary *)parars blogId:(NSUInteger)blogid;
/*
 保存blogid的username，以方便授权成功时获取个人信息和每次发微博时更新姓名
 */
+ (void)saveWeiboName:(NSString *)name blogId:(NSInteger)blogid;
/*
 删除bloid的信息
 */
+ (void)deleteWeiboInfo:(NSUInteger)blogid;
/*
 检查该微博是否已绑定
 */
+ (BOOL)checkHasBindingById:(NSUInteger)blogId;
/*
 得到微博的所有保存信息，包括oauth_key、oauth_secret、可能存在name
 */
+ (NSDictionary*)getBlogInfo:(NSInteger)blogId;
/*
 得到微博对应的姓名，如果存在，返回姓名。不存在返回oauth_key（因为后面有用姓名来判断是否已绑定的逻辑）
 */
+ (NSString *)getUserNameWithId:(NSInteger)blogId;
/*
 设置微博是否开启
 */
+ (void)setWeiboEnableWithWeiboId:(NSInteger)weiboId andStatus:(BOOL)isEnabled;
/*
 得到微博是否开启
 */
+ (BOOL)getWeiboEnabledWithWeiboId:(NSInteger)weiboId;
/*
 加载微博信息，该数组里保存的是字典，内容包括name 和 enable
 */
+ (NSArray*)loadWeiboInfo;
/*
 加载已绑定的微博信息，该数组内容是字典，包括name和weiboid
 */
+ (NSArray*)loadAuthorizedWeiboInfo;
/*
 发送消息
 */
//+ (BOOL)publishMessage:(NSString *)content;

@end

