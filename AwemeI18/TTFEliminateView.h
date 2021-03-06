//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, TTFEmbedShareView, TTFQuestionAnswerUnit, TTFantasyButton, TTFantasyImageView, TTFantasyLabel;
@protocol TTFEliminateViewDelegate;

@interface TTFEliminateView : UIView
{
    id <TTFEliminateViewDelegate> _delegate;
    TTFQuestionAnswerUnit *_questionAnswerUnit;
    UIView *_backgroundMaskView;
    UIView *_containerView;
    TTFantasyButton *_closeButton;
    TTFantasyLabel *_titleLabel;
    TTFantasyImageView *_avatarView;
    UIView *_questionContainerView;
    TTFantasyLabel *_questionLabel;
    UIView *_optionContainerView;
    UIView *_optionShapeContainer;
    CAShapeLayer *_optionShapeLayer;
    TTFantasyLabel *_optionLabel;
    TTFantasyLabel *_optionChoosenCountLabel;
    TTFantasyButton *_shareButton;
    TTFEmbedShareView *_embedShareView;
}

@property(retain, nonatomic) TTFEmbedShareView *embedShareView; // @synthesize embedShareView=_embedShareView;
@property(retain, nonatomic) TTFantasyButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TTFantasyLabel *optionChoosenCountLabel; // @synthesize optionChoosenCountLabel=_optionChoosenCountLabel;
@property(retain, nonatomic) TTFantasyLabel *optionLabel; // @synthesize optionLabel=_optionLabel;
@property(retain, nonatomic) CAShapeLayer *optionShapeLayer; // @synthesize optionShapeLayer=_optionShapeLayer;
@property(retain, nonatomic) UIView *optionShapeContainer; // @synthesize optionShapeContainer=_optionShapeContainer;
@property(retain, nonatomic) UIView *optionContainerView; // @synthesize optionContainerView=_optionContainerView;
@property(retain, nonatomic) TTFantasyLabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) UIView *questionContainerView; // @synthesize questionContainerView=_questionContainerView;
@property(retain, nonatomic) TTFantasyImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) TTFantasyLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTFantasyButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) TTFQuestionAnswerUnit *questionAnswerUnit; // @synthesize questionAnswerUnit=_questionAnswerUnit;
@property(nonatomic) __weak id <TTFEliminateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getShareExtraParams;
- (void)hide;
- (void)showWithQuestionAnswerUnit:(id)arg1 allOptionsChoosenUserCount:(long long)arg2 errorOption:(id)arg3 index:(long long)arg4 inView:(id)arg5;
- (id)getQuestionAttributedString;
- (void)keepOnWatching:(id)arg1;
- (void)inviteFriends:(id)arg1;
- (void)initComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

