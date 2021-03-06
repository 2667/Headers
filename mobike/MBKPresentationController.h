//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@interface MBKPresentationController : UIPresentationController
{
    _Bool _haveViewWillAppear;
    double _tansitionWidth;
}

@property(nonatomic) _Bool haveViewWillAppear; // @synthesize haveViewWillAppear=_haveViewWillAppear;
@property(nonatomic) double tansitionWidth; // @synthesize tansitionWidth=_tansitionWidth;
- (void)setMainViewWillAppear;
- (double)getTansitionWidth;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;

@end

