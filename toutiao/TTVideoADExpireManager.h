//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TTPersistence;

@interface TTVideoADExpireManager : NSObject
{
    TTPersistence *_persistence;
}

+ (id)sharedManager;
@property(retain, nonatomic) TTPersistence *persistence; // @synthesize persistence=_persistence;
- (void).cxx_destruct;
- (void)setExpiredItem:(id)arg1 forADID:(long long)arg2;
- (id)expireItemForADID:(long long)arg1;
- (id)init;

@end
