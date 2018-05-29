//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, WBSTPlayFooterBaseView, WBStoryUserView;
@protocol WBSTPlayFooterBaseViewDelegate, WBStoryFullScreenFooterContainerDelegate;

@interface WBSTPlayFooterContainerView : UIView
{
    id <WBSTPlayFooterBaseViewDelegate> _delegate;
    UIButton *_interactiveButton;
    WBStoryUserView *_authorView;
    unsigned long long _visibility;
    unsigned long long _segmentStyleType;
    WBSTPlayFooterBaseView<WBStoryFullScreenFooterContainerDelegate> *_footerView;
}

@property(retain, nonatomic) WBSTPlayFooterBaseView<WBStoryFullScreenFooterContainerDelegate> *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) unsigned long long segmentStyleType; // @synthesize segmentStyleType=_segmentStyleType;
@property(nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) WBStoryUserView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) UIButton *interactiveButton; // @synthesize interactiveButton=_interactiveButton;
@property(nonatomic) __weak id <WBSTPlayFooterBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)segmentTypeWith:(id)arg1 segment:(id)arg2;
- (void)doFollowSucessAnimation;
- (id)actionButtons;
- (void)doShareTipsHideAnimation;
- (_Bool)isShareTipsShowing;
- (void)setLikeState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateProgress:(double)arg1 segment:(id)arg2;
- (void)updateItem:(id)arg1 segments:(id)arg2 segmentIndex:(unsigned long long)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

