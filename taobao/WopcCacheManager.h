//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSDictionary, NSMutableDictionary, WopcCacheAdapter;

@interface WopcCacheManager : NSObject
{
    NSDictionary *_apiJS2NativeDict;
    NSDictionary *_h5WhiteLicenseMap;
    NSDictionary *_weexWhiteLicenseMap;
    WopcCacheAdapter *_cache;
    NSCache *_permissionDataCache;
    NSMutableDictionary *_permissionDataPersistentCache;
    NSCache *_accessTokenCache;
    NSCache *_confuseNickCache;
    unsigned long long _maxSize;
}

+ (void)removeAccessTokenInfoWithKey:(id)arg1;
+ (id)getAccessTokenInfoWithKey:(id)arg1;
+ (void)cacheAccessTokenInfo:(id)arg1 withKey:(id)arg2;
+ (void)removePermissionDataCacheForKey:(id)arg1;
+ (id)getPermissionDataWithKey:(id)arg1;
+ (void)cachePermissionDataPersistently:(id)arg1 withKey:(id)arg2;
+ (void)cachePermissionData:(id)arg1 withKey:(id)arg2;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) NSCache *confuseNickCache; // @synthesize confuseNickCache=_confuseNickCache;
@property(retain, nonatomic) NSCache *accessTokenCache; // @synthesize accessTokenCache=_accessTokenCache;
@property(retain, nonatomic) NSMutableDictionary *permissionDataPersistentCache; // @synthesize permissionDataPersistentCache=_permissionDataPersistentCache;
@property(retain, nonatomic) NSCache *permissionDataCache; // @synthesize permissionDataCache=_permissionDataCache;
@property(retain, nonatomic) WopcCacheAdapter *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)setCacheMaxSize:(unsigned long long)arg1;
- (id)getConfuseNickWithKey:(id)arg1;
- (void)cacheConfuseNick:(id)arg1 withKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (id)dictForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *weexWhiteLicenseMap; // @synthesize weexWhiteLicenseMap=_weexWhiteLicenseMap;
@property(readonly, nonatomic) NSDictionary *h5WhiteLicenseMap; // @synthesize h5WhiteLicenseMap=_h5WhiteLicenseMap;
@property(readonly, nonatomic) NSDictionary *apiJS2NativeDict; // @synthesize apiJS2NativeDict=_apiJS2NativeDict;
- (id)init;

@end

