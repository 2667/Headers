//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNLogisticsDetailCell.h"

@class CNLogisticsDetailAttentionOfficialAccountsModel, TBFollowSDKModule, UIButton, UIImageView, UILabel, UIView;

@interface CNLogisticsDetailAttentionOfficialAccountsView : CNLogisticsDetailCell
{
    TBFollowSDKModule *_followSDKModule;
    UIButton *_followButton;
    UIImageView *_iconImageView;
    UILabel *_singleTextLabel;
    UILabel *_twoLineTextLabelTopView;
    UILabel *_twoLineTextLabelBottomView;
    UIView *_followView;
    UIButton *_attentionButton;
}

@property(nonatomic) __weak UIButton *attentionButton; // @synthesize attentionButton=_attentionButton;
@property(nonatomic) __weak UIView *followView; // @synthesize followView=_followView;
@property(nonatomic) __weak UILabel *twoLineTextLabelBottomView; // @synthesize twoLineTextLabelBottomView=_twoLineTextLabelBottomView;
@property(nonatomic) __weak UILabel *twoLineTextLabelTopView; // @synthesize twoLineTextLabelTopView=_twoLineTextLabelTopView;
@property(nonatomic) __weak UILabel *singleTextLabel; // @synthesize singleTextLabel=_singleTextLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) TBFollowSDKModule *followSDKModule; // @synthesize followSDKModule=_followSDKModule;
- (void).cxx_destruct;
- (void)updateModel;
- (void)updateAttentionState:(_Bool)arg1;
- (void)closeButtonClick:(id)arg1;
- (void)attentionButtonClick:(id)arg1;
- (id)getAccountsButton;
- (void)initModel;
- (void)awakeFromNib;

// Remaining properties
@property(retain, nonatomic) CNLogisticsDetailAttentionOfficialAccountsModel *cellModel; // @dynamic cellModel;

@end
