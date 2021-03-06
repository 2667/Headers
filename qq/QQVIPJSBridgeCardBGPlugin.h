//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/CustomSummaryCardZipDelegate-Protocol.h>
#import <QQMainProject/IQQVIPFunctionFileUploadDelegate-Protocol.h>
#import <QQMainProject/QQVipImageChooserDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface QQVIPJSBridgeCardBGPlugin : QQWebViewPluginQQBizBase <QQVipImageChooserDelegate, IQQVIPFunctionFileUploadDelegate, CustomSummaryCardZipDelegate>
{
    NSMutableDictionary *_downloadCallBack;
    NSMutableDictionary *_downloadQuery;
    NSMutableArray *_reqInfoArray;
    NSString *_requestSetSummaryCardCallback;
    NSDictionary *_requestSetSummaryCardQuery;
    NSMutableDictionary *_downloadCardInfoDic;
    int _curDownloadBgId;
    NSMutableDictionary *_gameHonourCardDic;
    NSMutableDictionary *_gameHonourCallbackDic;
    NSMutableDictionary *_gameHonourQuery;
}

+ (id)cardBackgroundWebViewController:(id)arg1;
+ (id)getCardBGPage:(id)arg1 adTag:(id)arg2 styleId:(id)arg3 useCache:(_Bool)arg4;
+ (id)getCardBGPage:(id)arg1 adTag:(id)arg2 styleId:(id)arg3;
+ (id)getCardBGPageWithPromotionId:(int)arg1 styleId:(id)arg2;
+ (id)getCardBGPage:(id)arg1 adTag:(id)arg2;
- (void).cxx_destruct;
- (_Bool)isCurrentCardUsedPhotoWall:(id)arg1;
- (id)chooseDicForCustomBackground:(id)arg1;
- (id)currentNavigationViewController;
- (void)errorChoose:(id)arg1;
- (void)didCancelChoose:(id)arg1;
- (void)didChoosedImage:(id)arg1 withImage:(id)arg2;
- (void)handleJsBridgeRequest_card_clickPhotoWall:(id)arg1;
- (void)handleJsBridgeRequest_card_uploadBackground:(id)arg1;
- (void)failedRequestSetTemplateID:(id)arg1;
- (void)successRequestSetTemplateID:(id)arg1;
- (void)handleJsBridgeRequest_diycard_edit:(id)arg1;
- (int)getDownloadedCardResourceCount:(id)arg1;
- (void)downloadFileResultWithUrl:(id)arg1 withType:(long long)arg2 andResult:(_Bool)arg3;
- (void)downloadGameHonourCardResource:(id)arg1 callback:(id)arg2;
- (void)handleJsBridgeRequest_card_setSwitchOfKingGlory:(id)arg1;
- (void)handleJsBridgeRequest_card_downloadWzResource:(id)arg1;
- (void)handleJsBridgeRequest_card_setGameHonour:(id)arg1;
- (void)handleJsBridgeRequest_roam_showFixedRoam:(id)arg1;
- (void)handleJsBridgeRequest_card_setSummaryCard:(id)arg1;
- (void)handleJsBridgeRequest_card_openView:(id)arg1;
- (id)handleJsBridgeRequest_card_testMethod:(id)arg1;
- (id)getUserVipReportInfo;
- (void)handleJsBridgeRequest_card_report:(id)arg1;
- (void)handleJsBridgeRequest_card_getTime:(id)arg1;
- (void)handleJsBridgeRequest_card_preview:(id)arg1;
- (void)handleJsBridgeRequest_card_cancelDownload:(id)arg1;
- (void)handleJsBridgeRequest_card_queryDownloadInfo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleJsBridgeRequest_card_download:(id)arg1;
- (void)handleJsBridgeRequest_card_getInfo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

