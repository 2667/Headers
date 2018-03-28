//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class KDActivityStructModel, NSArray, NSNumber, NSString;
@protocol Optional;

@interface KDUserStructModel : WDBaseModel
{
    NSString *_user_id;
    NSString *_uname;
    NSString<Optional> *_user_intro;
    NSString *_avatar_url;
    NSNumber<Optional> *_is_verify;
    NSString<Optional> *_user_auth_info;
    NSArray<Optional> *_medals;
    NSNumber<Optional> *_is_following;
    NSNumber<Optional> *_is_followed;
    NSNumber<Optional> *_invite_status;
    NSString<Optional> *_user_schema;
    NSNumber<Optional> *_total_digg;
    NSNumber<Optional> *_total_answer;
    KDActivityStructModel<Optional> *_activity;
}

@property(retain, nonatomic) KDActivityStructModel<Optional> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSNumber<Optional> *total_answer; // @synthesize total_answer=_total_answer;
@property(retain, nonatomic) NSNumber<Optional> *total_digg; // @synthesize total_digg=_total_digg;
@property(retain, nonatomic) NSString<Optional> *user_schema; // @synthesize user_schema=_user_schema;
@property(retain, nonatomic) NSNumber<Optional> *invite_status; // @synthesize invite_status=_invite_status;
@property(retain, nonatomic) NSNumber<Optional> *is_followed; // @synthesize is_followed=_is_followed;
@property(retain, nonatomic) NSNumber<Optional> *is_following; // @synthesize is_following=_is_following;
@property(copy, nonatomic) NSArray<Optional> *medals; // @synthesize medals=_medals;
@property(retain, nonatomic) NSString<Optional> *user_auth_info; // @synthesize user_auth_info=_user_auth_info;
@property(retain, nonatomic) NSNumber<Optional> *is_verify; // @synthesize is_verify=_is_verify;
@property(retain, nonatomic) NSString *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(retain, nonatomic) NSString<Optional> *user_intro; // @synthesize user_intro=_user_intro;
@property(retain, nonatomic) NSString *uname; // @synthesize uname=_uname;
@property(retain, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
