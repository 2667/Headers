//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWETextLoadingView : UIView
{
    UIImageView *_loadingLogo;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *loadingLogo; // @synthesize loadingLogo=_loadingLogo;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setupUI;
- (id)init;

@end

