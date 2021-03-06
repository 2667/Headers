//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "VLViewDelegate-Protocol.h"

@class NSString, TBOrderCatapultModel, UIButton, UILabel, UIView, VLView;

@interface TBOrderDynamicRenderCell : TBOrderBasicCell <UIScrollViewDelegate, UIWebViewDelegate, VLViewDelegate>
{
    VLView *_vlView;
    UIView *_errorView;
    UILabel *_tipLabel;
    UIButton *_refreshButton;
    UILabel *_loadingView;
    unsigned long long _display;
    TBOrderCatapultModel *_model;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(retain, nonatomic) TBOrderCatapultModel *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long display; // @synthesize display=_display;
@property(retain, nonatomic) UILabel *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) VLView *vlView; // @synthesize vlView=_vlView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshClicked;
- (void)alarm;
- (void)onLoadFinishWithVLView:(id)arg1;
- (void)onLoadVLView:(id)arg1 Error:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewCall:(id)arg1 Callback:(CDUnknownBlockType)arg2;
- (void)load;
- (void)bindData:(id)arg1 controller:(id)arg2 styleKitContext:(id)arg3;
- (void)layoutSubviews;
- (void)viewLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

