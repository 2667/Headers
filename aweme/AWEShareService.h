//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "HTSService-Protocol.h"
#import "HTSShareMessage-Protocol.h"
#import "InstallAndDeviceIDMessage-Protocol.h"

@class AWEAwemeModel, AWEAwemeShareViewController, AWEShareStatisticsModel, NSString, UIWindow;

@interface AWEShareService : HTSService <InstallAndDeviceIDMessage, HTSShareMessage, HTSService>
{
    AWEAwemeModel *_awemeModel;
    UIWindow *_lastWindow;
    UIWindow *_shareWindow;
    AWEShareStatisticsModel *_statistics;
    AWEAwemeShareViewController *_shareController;
    CDUnknownBlockType _prepareBlock;
}

+ (void)shareByType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)shareWithModel:(id)arg1 type:(long long)arg2 prepare:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)shareZaloAvailable;
+ (_Bool)shareKakaotalkAvailable;
+ (_Bool)shareLineAvailable;
+ (_Bool)shareSinaWeiboAvailable;
+ (_Bool)shareQQAvailable;
+ (_Bool)shareWeChatAvailable;
@property(copy, nonatomic) CDUnknownBlockType prepareBlock; // @synthesize prepareBlock=_prepareBlock;
@property(retain, nonatomic) AWEAwemeShareViewController *shareController; // @synthesize shareController=_shareController;
@property(retain, nonatomic) AWEShareStatisticsModel *statistics; // @synthesize statistics=_statistics;
@property(retain, nonatomic) UIWindow *shareWindow; // @synthesize shareWindow=_shareWindow;
@property(retain, nonatomic) UIWindow *lastWindow; // @synthesize lastWindow=_lastWindow;
@property(nonatomic) __weak AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
- (void).cxx_destruct;
- (void)HTSShareMessageDidOpenSDKWithClickedShareType:(long long)arg1;
- (void)dismissPanel:(_Bool)arg1;
- (void)dismissPanel;
- (void)showPanelWithShareModel:(id)arg1 coverURLString:(id)arg2 prepare:(CDUnknownBlockType)arg3 hideOptions:(long long)arg4;
- (void)showPanel;
- (void)logWithTargetType:(long long)arg1 enterFrom:(id)arg2 jsLogArgs:(id)arg3 requestID:(id)arg4 isBodydance:(_Bool)arg5;
- (void)logWithTargetType:(long long)arg1 enterFrom:(id)arg2 jsLogArgs:(id)arg3 requestID:(id)arg4;
- (void)shareWithModel:(id)arg1 type:(long long)arg2;
- (void)shareWithModel:(id)arg1 coverURLString:(id)arg2 prepare:(CDUnknownBlockType)arg3 type:(long long)arg4;
- (void)shareWithModel:(id)arg1 user:(id)arg2 type:(long long)arg3;
- (void)didUpdateDeviceIDFrom:(id)arg1 to:(id)arg2;
- (void)didUpdateInstallIDFrom:(id)arg1 to:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)shareBodydance:(id)arg1 image:(id)arg2 url:(id)arg3 type:(long long)arg4;
- (void)shareH5WithModel:(id)arg1 coverURLString:(id)arg2 jsLogArgs:(id)arg3;
- (void)shareWithModel:(id)arg1 coverURLString:(id)arg2 shareAction:(CDUnknownBlockType)arg3;
- (void)shareWithModel:(id)arg1 coverURLArray:(id)arg2 needWatermark:(_Bool)arg3 shareAction:(CDUnknownBlockType)arg4;
- (void)shareWithModel:(id)arg1 user:(id)arg2 shareAction:(CDUnknownBlockType)arg3;
- (id)_urlStringWithString:(id)arg1 addQueryDict:(id)arg2;
- (void)addShareParamsToModel:(id)arg1 type:(long long)arg2 shareWeiboDesc:(id)arg3;
- (id)_prepareShareModelFromAweme:(id)arg1;
- (id)_prepareShareModelFromUser:(id)arg1 type:(long long)arg2;
- (id)_cutoffContent:(id)arg1;
- (void)shareAweme:(id)arg1 image:(id)arg2 url:(id)arg3 type:(long long)arg4 imageURL:(id)arg5;
- (void)shareAweme:(id)arg1 image:(id)arg2 type:(long long)arg3;
- (void)_prepareWithShareModel:(id)arg1 imageAweme:(id)arg2 type:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareImageAweme:(id)arg1 type:(long long)arg2 referString:(id)arg3;
- (void)shareImageAwemeOnWindow:(id)arg1 referString:(id)arg2 hideOptions:(long long)arg3;
- (void)__prepareWithShareModel:(id)arg1 aweme:(id)arg2 type:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_prepareWithShareModel:(id)arg1 aweme:(id)arg2 type:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareAweme:(id)arg1 type:(long long)arg2 referString:(id)arg3;
- (void)shareAwemeOnWindow:(id)arg1 referString:(id)arg2 hideOptions:(long long)arg3;
- (id)_prepareShareModelFromMusic:(id)arg1;
- (void)shareMusic:(id)arg1 referString:(id)arg2;
- (id)_prepareShareModelFromPOI:(id)arg1;
- (void)sharePOI:(id)arg1 coverURLString:(id)arg2;
- (id)_prepareShareModelFromOriginalMusic:(id)arg1 type:(long long)arg2 isMusicFinder:(_Bool)arg3;
- (void)shareOriginalMusic:(id)arg1 image:(id)arg2 url:(id)arg3 type:(long long)arg4 isMusicFinder:(_Bool)arg5;
- (void)shareOriginalMusic:(id)arg1 image:(id)arg2 type:(long long)arg3 isMusicFinder:(_Bool)arg4;
- (id)_prepareShareModelFromChallenge:(id)arg1;
- (void)shareChallenge:(id)arg1 coverURLString:(id)arg2;
- (id)_prepareShareModelFromLive:(id)arg1;
- (void)shareLive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

