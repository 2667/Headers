//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPointAnnotation.h"

#import "MBKAnnotationAssocaitaionProtocol-Protocol.h"

@class MMPolyline, NSString;
@protocol MBKPOIBackProtocol, MMOverlay;

@interface MBKPOIAnnotaion : MMPointAnnotation <MBKAnnotationAssocaitaionProtocol>
{
    id <MBKPOIBackProtocol> _backShape;
}

@property(retain, nonatomic) id <MBKPOIBackProtocol> backShape; // @synthesize backShape=_backShape;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <MMOverlay> associatedOverlay;

// Remaining properties
@property(nonatomic) __weak MMPolyline *associatedRoutePolyline;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

