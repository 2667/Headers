//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface YXLiveAudienceInViewModel : NSObject
{
    int _isAnnoy;
    long long _level;
    NSString *_nick;
    NSString *_vtypeName;
    long long _verified_type;
}

+ (id)modelLevel:(long long)arg1 nick:(id)arg2 type:(id)arg3 verified_type:(long long)arg4 isAnnoy:(int)arg5;
@property(nonatomic) int isAnnoy; // @synthesize isAnnoy=_isAnnoy;
@property(nonatomic) long long verified_type; // @synthesize verified_type=_verified_type;
@property(copy, nonatomic) NSString *vtypeName; // @synthesize vtypeName=_vtypeName;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) long long level; // @synthesize level=_level;
- (void).cxx_destruct;

@end

