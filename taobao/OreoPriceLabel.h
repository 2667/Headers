//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface OreoPriceLabel : UILabel
{
    double _ascender;
}

@property(nonatomic) double ascender; // @synthesize ascender=_ascender;
- (id)formatPrice:(id)arg1;
- (struct CGSize)caluateHeightWithText:(id)arg1 prefix:(id)arg2 unitStr:(id)arg3 fontSize:(double)arg4;
- (struct CGSize)caluateHeightWithText:(id)arg1 prefix:(id)arg2 fontSize:(double)arg3;
- (struct CGSize)caluateHeightWithText:(id)arg1 prefix:(id)arg2;
- (void)configData:(id)arg1 color:(id)arg2 prefix:(id)arg3 unitStr:(id)arg4 fontSize:(double)arg5;
- (void)configData:(id)arg1 color:(id)arg2 prefix:(id)arg3 fontSize:(double)arg4;
- (void)configData:(id)arg1 color:(id)arg2 prefix:(id)arg3;
- (void)configData:(id)arg1 color:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
