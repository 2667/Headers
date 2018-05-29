//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TabBarMoreItemCell.h"

@class UIButton, UILabel, WBAutoProgressButton, WBContentImageView, WBVipEmoticonPackage;
@protocol WBMyVipEmoticonCellDelegate;

@interface WBMyVipEmoticonCell : TabBarMoreItemCell
{
    WBVipEmoticonPackage *_gifPkg;
    id <WBMyVipEmoticonCellDelegate> _delegate;
    WBContentImageView *_pkgImageView;
    UILabel *_pkgLabel;
    WBAutoProgressButton *_updateButton;
    UIButton *_removeButton;
}

@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) WBAutoProgressButton *updateButton; // @synthesize updateButton=_updateButton;
@property(retain, nonatomic) UILabel *pkgLabel; // @synthesize pkgLabel=_pkgLabel;
@property(retain, nonatomic) WBContentImageView *pkgImageView; // @synthesize pkgImageView=_pkgImageView;
@property(nonatomic) __weak id <WBMyVipEmoticonCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBVipEmoticonPackage *gifPkg; // @synthesize gifPkg=_gifPkg;
- (void).cxx_destruct;
- (void)removeButtonDidPressed;
- (void)updateButtonDidPressed;
- (void)setButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)finishUpdateButtonAnimationWithResult:(_Bool)arg1;
- (void)startUpdateButtonAnimation;
- (void)layoutSubviews;
- (_Bool)useDefaultBackgroundColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

