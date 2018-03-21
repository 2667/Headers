//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UILabel;

@interface QQScreenShotQRImageView : UIView
{
    UILabel *_titleLabel;
    UILabel *_briefLabel;
    UIImage *_qrcodeImage;
    UIImage *_articleImage;
    UIImage *_logoImage;
}

@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) UIImage *articleImage; // @synthesize articleImage=_articleImage;
@property(retain, nonatomic) UIImage *qrcodeImage; // @synthesize qrcodeImage=_qrcodeImage;
@property(retain, nonatomic) UILabel *briefLabel; // @synthesize briefLabel=_briefLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)ocs_sendSynchronousRequest:(id)arg1;
- (void)ocs_printlog:(id)arg1;
- (void)ocs_CGContextSetStrokeColor:(struct CGContext *)arg1;

@end
