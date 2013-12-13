//
//  FSMyFaverateObject.h
//  PeopleNewsReaderPhone
//
//  Created by lygn128 on 13-12-13.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface FSMyFaverateObject : NSManagedObject

@property (nonatomic, retain) NSString * newsid;
@property (nonatomic, retain) NSString * news_abstract;
@property (nonatomic, retain) NSString * channelid;
@property (nonatomic, retain) NSNumber * timestamp;
@property (nonatomic, retain) NSString * picture;
@property (nonatomic, retain) NSString * link;
@property (nonatomic, retain) NSString * picdesc;
@property (nonatomic, retain) NSString * source;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * order;
@property (nonatomic, retain) NSString * group;
@property (nonatomic, retain) NSString * browserCount;
@property (nonatomic, retain) NSNumber * commentCount;
@property (nonatomic, retain) NSString * realtimeid;
@property (nonatomic, retain) NSString * kind;
@property (nonatomic, retain) NSString * UPDATE_DATE;
@property (nonatomic, retain) NSNumber * isDeep;
@property (nonatomic, retain) NSString * deepId;
@property (nonatomic, retain) NSString * deepTitle;
@property (nonatomic, retain) NSString * deepPictureLogo;
@property (nonatomic, retain) NSString * deepNews_abstract;
@property (nonatomic, retain) NSNumber * deepSort;
@property (nonatomic, retain) NSString * deepPictureLink;
@property (nonatomic, retain) NSString * deepPubDate;
@property (nonatomic, retain) NSString * deepTimestamp;
@property (nonatomic, retain) NSString * deepCreatetime;

@end
