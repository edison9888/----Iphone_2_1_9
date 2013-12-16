//
//  FSOneDayNewsViewController.h
//  PeopleNewsReaderPhone
//
//  Created by people.com.cn on 12-8-13.
//  Copyright 2012 people.com.cn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSBasePeopleViewController.h"
#import "FSOneDayNewsListContainerView.h"
#import "LygAdsDao.h"

@class FS_GZF_ForOnedayNewsFocusTopDAO,FS_GZF_ForOneDayNewsListDAO,FS_GZF_GetWeatherMessageDAO;

@interface FSOneDayNewsViewController : FSBasePeopleViewController <FSTableContainerViewDelegate,UIGestureRecognizerDelegate>{
@protected
    FSOneDayNewsListContainerView     *_fsOneDayNewsListContainerView;
    NSMutableArray                    *_sectionMessage;
    NSDate                            *_reFreshDate;
    NSTimeInterval                     _TimeInterval;
    NSArray                           *_myArry;
}
@property(nonatomic,copy)void (^changeTitleColor)(UITableViewCell * cell);
@property(nonatomic,retain) FS_GZF_ForOneDayNewsListDAO       *newsListData;
@property(nonatomic,retain) FS_GZF_ForOnedayNewsFocusTopDAO   *fsForOneDayNewsListFocusTopData;
@property(nonatomic,retain) LygAdsDao                         *lygAdsDao;

-(void)reSetSectionMessage;

@end
