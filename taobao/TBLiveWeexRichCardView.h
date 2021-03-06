//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "WXModuleProtocol-Protocol.h"

@class NSString, TBLiveCPVideoModel, TBLiveHPRichCardView, WXSDKInstance;

@interface TBLiveWeexRichCardView : WXComponent <WXModuleProtocol>
{
    TBLiveCPVideoModel *_videoModel;
    TBLiveHPRichCardView *_richCard;
}

+ (id)wx_export_method_113;
+ (id)wx_export_method_106;
+ (id)wx_export_method_99;
+ (id)wx_export_method_92;
+ (id)wx_export_method_85;
+ (id)wx_export_method_77;
+ (id)wx_export_method_70;
@property(retain, nonatomic) TBLiveHPRichCardView *richCard; // @synthesize richCard=_richCard;
@property(retain, nonatomic) TBLiveCPVideoModel *videoModel; // @synthesize videoModel=_videoModel;
- (void).cxx_destruct;
- (void)clickEvent;
- (void)stopFavor;
- (void)startFavor;
- (void)stopPlayVideo;
- (void)startPlayVideo;
- (void)closeBubbleTips;
- (void)showBubbleTips;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

