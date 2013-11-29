//
//  FSTopicSubjectListDAO.h
//  PeopleNewsReaderPhone
//
//  Created by people.com.cn on 12-10-23.
//
//

#import <Foundation/Foundation.h>
#import "FSGetListDAO.h"

@interface FSTopicSubjectListDAO : FSGetListDAO {
@private
    NSString *_deepid;
}

@property (nonatomic, retain) NSString *deepid;

@end
