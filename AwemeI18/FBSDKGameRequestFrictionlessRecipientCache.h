//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

@interface FBSDKGameRequestFrictionlessRecipientCache : NSObject
{
    NSSet *_recipientIDs;
}

- (void).cxx_destruct;
- (void)_updateCache;
- (void)_accessTokenDidChangeNotification:(id)arg1;
- (void)updateWithResults:(id)arg1;
- (_Bool)recipientsAreFrictionless:(id)arg1;
- (void)dealloc;
- (id)init;

@end

