//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSConfigDataProvider-Protocol.h"

@class BFTask, KSOnlineResourceConfig, KSWeakObjectSet, NSMutableDictionary, NSString;

@interface KSOnlineResource : NSObject <KSConfigDataProvider>
{
    KSOnlineResourceConfig *_localConfig;
    NSString *_containerPath;
    KSWeakObjectSet *_updatableSet;
    BFTask *_metaTask;
    KSOnlineResourceConfig *_onlineConfig;
    NSMutableDictionary *_updateTaskByKey;
    NSMutableDictionary *_observersByKey;
}

+ (void)migrateOldConfigFiles;
+ (id)currentResource;
@property(retain, nonatomic) NSMutableDictionary *observersByKey; // @synthesize observersByKey=_observersByKey;
@property(retain, nonatomic) NSMutableDictionary *updateTaskByKey; // @synthesize updateTaskByKey=_updateTaskByKey;
@property(retain) KSOnlineResourceConfig *onlineConfig; // @synthesize onlineConfig=_onlineConfig;
@property(retain, nonatomic) BFTask *metaTask; // @synthesize metaTask=_metaTask;
- (void).cxx_destruct;
- (id)providerName;
- (void)unbindConfigUpdate:(id)arg1;
- (void)bindConfigUpdate:(id)arg1;
- (void)updateCheck;
- (_Bool)unpackResource:(id)arg1 forConfig:(id)arg2 withKey:(id)arg3;
- (id)resourceCachedDirectoryForConfig:(id)arg1 withKey:(id)arg2;
- (id)_downloadTaskForConfigKey:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 logParams:(id)arg3;
- (id)updateWithConfigKey:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 logParams:(id)arg4;
- (void)removeObserver:(id)arg1 forConfigKey:(id)arg2;
- (void)didFinishDownloadingWithResult:(_Bool)arg1 error:(id)arg2 forConfigKey:(id)arg3;
- (void)updateProgress:(double)arg1 forConfigKey:(id)arg2;
- (void)updateLocalConfig:(id)arg1 ignoredKeys:(id)arg2;
- (id)refreshMeta;
- (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
- (id)init;
- (id)URLForResourceDirectory:(id)arg1;
- (id)pathForResourceDirectory:(id)arg1;
- (id)URLForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (void)stopObservingEditResourceDownloadingStatus:(id)arg1;
- (id)updateEditResourceWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 logParams:(id)arg3;
@property(readonly, nonatomic) _Bool editResourceNeedsDownload;
- (void)stopObservingMagicEffectResourceDownloadingStatus:(id)arg1;
- (id)updateMagicEffectResourceWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 logParams:(id)arg3;
- (id)magicEffectResourceDirectory;
@property(readonly, nonatomic) _Bool magicEffectResourceNeedsDownload;
- (id)facePlusDetectModelPath;
- (void)stopObservingTrackDataDownloadingStatus:(id)arg1;
- (id)updateTrackDataWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 logParams:(id)arg3;
@property(readonly, nonatomic) _Bool trackDataNeedsDownload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

