//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKPayBindwxpayinfoRequest : MBKMobikeRequest
{
    NSString *_nickName;
    NSString *_avatar;
    NSString *_unionId;
    NSString *_openid;
    NSString *_exTime;
}

@property(copy, nonatomic) NSString *exTime; // @synthesize exTime=_exTime;
@property(copy, nonatomic) NSString *openid; // @synthesize openid=_openid;
@property(copy, nonatomic) NSString *unionId; // @synthesize unionId=_unionId;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (id)init;

@end
