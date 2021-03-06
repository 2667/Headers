//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AccountButtonInternal, NSObject, TTThirdPartyAccountInfoBase, UIImage, UIImageView, UILabel;
@protocol AccountButtonDelegate;

@interface AccountButton : UIView
{
    _Bool _displayName;
    struct UIEdgeInsets _contentInsets;
    _Bool displayName;
    TTThirdPartyAccountInfoBase *accountInfo;
    NSObject<AccountButtonDelegate> *delegate;
    UILabel *nameLabel;
    UIImage *normalBgImage;
    UIImage *highlighBgImage;
    UIImageView *bgImageView;
    AccountButtonInternal *buttonInternal;
}

@property(retain, nonatomic) AccountButtonInternal *buttonInternal; // @synthesize buttonInternal;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView;
@property(retain, nonatomic) UIImage *highlighBgImage; // @synthesize highlighBgImage;
@property(retain, nonatomic) UIImage *normalBgImage; // @synthesize normalBgImage;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel;
@property(nonatomic) __weak NSObject<AccountButtonDelegate> *delegate; // @synthesize delegate;
@property(retain, nonatomic) TTThirdPartyAccountInfoBase *accountInfo; // @synthesize accountInfo;
- (void).cxx_destruct;
@property(nonatomic) _Bool displayName; // @synthesize displayName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCustomAlpha:(float)arg1;
- (void)clicked;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) struct UIEdgeInsets contentInsets;
- (id)initWithFrame:(struct CGRect)arg1 accountInfo:(id)arg2;
- (void)dealloc;

@end

