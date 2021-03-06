//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MirrorGetMaterialDelegate-Protocol.h"

@class MirrorMaterialManager, MirrorNetworkAdapter, NSString, TBBizDownloadTask;
@protocol MirrorMakeUpManagerDelegate;

@interface MirrorMakeUpManager : NSObject <MirrorGetMaterialDelegate>
{
    _Bool _useNewMtopApi;
    int _materialType;
    id <MirrorMakeUpManagerDelegate> _multicastDelegate;
    NSString *_deviceSupportMakeUp;
    NSString *_cacheKeyFaceModel;
    MirrorNetworkAdapter *_getDownLadUrlNetWorkManager;
    CDUnknownBlockType _makeUpCallBack;
    MirrorMaterialManager *_materialManager;
    TBBizDownloadTask *_tbDownload;
    MirrorNetworkAdapter *_isSupportNetWork;
}

+ (void)updateIsSupportFormServerWithBizType:(long long)arg1 useNewMtopApi:(_Bool)arg2 hasCache:(_Bool)arg3 successCallBack:(CDUnknownBlockType)arg4 failCallBack:(CDUnknownBlockType)arg5;
+ (void)isSupportMakeUpWithBizType:(long long)arg1 useNewMtopApi:(_Bool)arg2 successCallBack:(CDUnknownBlockType)arg3 failCallBack:(CDUnknownBlockType)arg4;
+ (void)isSupportMakeUpWithBizType:(long long)arg1 successCallBack:(CDUnknownBlockType)arg2 failCallBack:(CDUnknownBlockType)arg3;
+ (id)getOSVersion;
+ (id)sharedInstance;
@property(retain, nonatomic) MirrorNetworkAdapter *isSupportNetWork; // @synthesize isSupportNetWork=_isSupportNetWork;
@property(retain, nonatomic) TBBizDownloadTask *tbDownload; // @synthesize tbDownload=_tbDownload;
@property(retain, nonatomic) MirrorMaterialManager *materialManager; // @synthesize materialManager=_materialManager;
@property(copy, nonatomic) CDUnknownBlockType makeUpCallBack; // @synthesize makeUpCallBack=_makeUpCallBack;
@property(retain, nonatomic) MirrorNetworkAdapter *getDownLadUrlNetWorkManager; // @synthesize getDownLadUrlNetWorkManager=_getDownLadUrlNetWorkManager;
@property(retain, nonatomic) NSString *cacheKeyFaceModel; // @synthesize cacheKeyFaceModel=_cacheKeyFaceModel;
@property(retain, nonatomic) NSString *deviceSupportMakeUp; // @synthesize deviceSupportMakeUp=_deviceSupportMakeUp;
@property(nonatomic) _Bool useNewMtopApi; // @synthesize useNewMtopApi=_useNewMtopApi;
@property(nonatomic) int materialType; // @synthesize materialType=_materialType;
@property(nonatomic) __weak id <MirrorMakeUpManagerDelegate> multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getMaterialFailWithMsg:(id)arg1;
- (void)getMaterialSuccess:(id)arg1;
- (void)startGetMaterialFromServer;
- (id)convertWithImage:(id)arg1;
- (id)takePhotoWithImg:(id)arg1;
- (_Bool)beautyWithArrayData:(id)arg1;
- (void)makeUpWithArrayData:(id)arg1 materialType:(int)arg2 resultCallBack:(CDUnknownBlockType)arg3;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)cancelDownload;
- (id)getFaceModelPath;
- (_Bool)isFaceModelDownLoad;
- (void)preDownloadFaceModelWithUrl:(id)arg1 md5:(id)arg2;
- (void)downLoadFaceModel;
- (void)initFaceModel;
- (void)initMakeUpModule;
- (id)init;
- (void)clear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

