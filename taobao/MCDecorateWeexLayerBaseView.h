//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface MCDecorateWeexLayerBaseView : UIView
{
    double _modalThreshold;
}

@property(nonatomic) double modalThreshold; // @synthesize modalThreshold=_modalThreshold;
- (double)alphaOfPointFromLayer:(struct CGPoint)arg1;
- (double)alphaOfPointFromViewScreenShot:(struct CGPoint)arg1;
- (double)alphaOfPoint:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
