//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface YXScreenshotView : UIView
{
    CDUnknownBlockType _sharedBlock;
    CDUnknownBlockType _closeBlock;
    unsigned long long _type;
    UIImage *_screenshot;
}

@property(retain, nonatomic) UIImage *screenshot; // @synthesize screenshot=_screenshot;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType sharedBlock; // @synthesize sharedBlock=_sharedBlock;
- (void).cxx_destruct;
- (void)hiddenScreenshotView;
- (void)showScreenshotView;
- (void)shareAction:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1;

@end

