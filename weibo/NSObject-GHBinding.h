//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NSObject (GHBinding)
- (void)unbindAllPath;
- (void)unbindPathOnTargetObject:(id)arg1 path:(id)arg2;
- (void)unbindPathChange:(id)arg1;
- (void)bindPath:(id)arg1 toObject:(id)arg2 onChange:(CDUnknownBlockType)arg3;
- (void)bindPath:(id)arg1 onChange:(CDUnknownBlockType)arg2;
- (void)didRemoveFromBinding:(id)arg1;
- (void)didAddToBinding:(id)arg1;
- (void)unbindPath:(id)arg1;
- (void)bindPath:(id)arg1 onObject:(id)arg2 path:(id)arg3;
@end

