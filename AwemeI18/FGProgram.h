//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FGProgram : NSObject
{
    int _uniforms[3];
    unsigned int _program;
}

@property(nonatomic) unsigned int program; // @synthesize program=_program;
- (void)bindMainTexture:(unsigned int)arg1 toTarget:(unsigned int)arg2 hasMipmaps:(_Bool)arg3;
- (void)loadModelView3D:(struct CATransform3D)arg1;
- (void)loadModelView:(struct CGAffineTransform)arg1;
- (void)loadProjection3D:(struct CATransform3D)arg1;
- (void)loadProjection:(struct CGAffineTransform)arg1;
- (void)load3DTransform:(struct CATransform3D)arg1 intoUniform:(int)arg2;
- (void)loadAffineTransform:(struct CGAffineTransform)arg1 intoUniform:(int)arg2;
- (void)loadVertexData:(const float *)arg1;
- (_Bool)linkProgram:(unsigned int)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 source:(id)arg3;
- (_Bool)loadVertexShader:(const char *)arg1 andFragmentShader:(const char *)arg2 attributes:(id)arg3;

@end

