//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MovieSDKTabBarItem, UIImageView;

@interface MovieSDKTabBarButton : UIButton
{
    MovieSDKTabBarItem *item;
    _Bool showsTitle;
    double imageHeight;
    double titleHeight;
    struct CGPoint titleOffset;
    UIImageView *dotIndicator;
}

@property(readonly, nonatomic) UIImageView *dotIndicator; // @synthesize dotIndicator;
@property(nonatomic) struct CGPoint titleOffset; // @synthesize titleOffset;
@property(nonatomic) double titleHeight; // @synthesize titleHeight;
@property(nonatomic) double imageHeight; // @synthesize imageHeight;
@property(nonatomic) _Bool showsTitle; // @synthesize showsTitle;
@property(readonly, nonatomic) MovieSDKTabBarItem *item; // @synthesize item;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithItem:(id)arg1;

@end

