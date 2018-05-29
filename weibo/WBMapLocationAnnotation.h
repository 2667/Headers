//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MKAnnotation-Protocol.h"

@class NSDictionary, NSString;

@interface WBMapLocationAnnotation : NSObject <MKAnnotation>
{
    struct CLLocationCoordinate2D coordinate;
    NSString *title;
    NSString *subtitle;
    NSDictionary *userInfo;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
- (void).cxx_destruct;
- (id)initWithLocation:(struct CLLocationCoordinate2D)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

