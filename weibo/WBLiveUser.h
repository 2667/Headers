//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WBLiveUser : NSObject
{
    _Bool _silenced;
    _Bool _isFollowed;
    _Bool _isVIP;
    NSString *_uid;
    NSString *_nickname;
    NSString *_avatarUrl;
    NSString *_token;
    NSString *_userSystem;
    NSString *_desc;
    NSString *_verifiedReason;
    unsigned long long _followersCount;
    unsigned long long _followingCount;
    unsigned long long _statusCount;
    long long _level;
    long long _role;
    double _joinTime;
    double _silenceTime;
    unsigned long long _userAuthType;
}

+ (id)currentUser;
+ (id)userWithIMUser:(id)arg1;
+ (id)userWithUserID:(id)arg1;
@property(nonatomic) unsigned long long userAuthType; // @synthesize userAuthType=_userAuthType;
@property(nonatomic) _Bool isVIP; // @synthesize isVIP=_isVIP;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) _Bool silenced; // @synthesize silenced=_silenced;
@property(nonatomic) double silenceTime; // @synthesize silenceTime=_silenceTime;
@property(nonatomic) double joinTime; // @synthesize joinTime=_joinTime;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) unsigned long long statusCount; // @synthesize statusCount=_statusCount;
@property(nonatomic) unsigned long long followingCount; // @synthesize followingCount=_followingCount;
@property(nonatomic) unsigned long long followersCount; // @synthesize followersCount=_followersCount;
@property(copy, nonatomic) NSString *verifiedReason; // @synthesize verifiedReason=_verifiedReason;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *userSystem; // @synthesize userSystem=_userSystem;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)updateWithOwnerInfo:(id)arg1;
- (void)updateWithWBUser:(id)arg1;
- (void)updateWithIMUser:(id)arg1;
- (id)initWithWBUser:(id)arg1;
- (id)initWithIMUser:(id)arg1;
- (id)init;

@end

