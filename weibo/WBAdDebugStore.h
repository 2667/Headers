//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WBAdDebugStore : NSObject
{
    NSMutableDictionary *_storeDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *storeDic; // @synthesize storeDic=_storeDic;
- (void).cxx_destruct;
- (void)getStoreModel:(id *)arg1 displayName:(id *)arg2 withKey:(id)arg3;
- (id)storeAllKeys;
- (void)removeModelByKey:(id)arg1;
- (void)storeModel:(id)arg1 displayName:(id)arg2 withKey:(id)arg3;
- (id)init;

@end

