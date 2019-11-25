//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PAGLProgramExecutable;

@interface PAGLProgramInstance : NSObject
{
    PAGLProgramExecutable *_program;
    NSMutableDictionary *_uniforms;
    BOOL _isRunning;
}

@property(readonly, nonatomic) PAGLProgramExecutable *program; // @synthesize program=_program;
- (void).cxx_destruct;
- (id)valueForUniform:(id)arg1;
- (void)setValue:(id)arg1 forUniform:(id)arg2;
- (BOOL)_setUniform:(id)arg1 withValue:(id)arg2;
- (int)_getUniformLocation:(id)arg1;
- (BOOL)_checkAllUserDefinedUniformsAreSet;
- (BOOL)_setAllUserDefinedUniformValues;
- (BOOL)_checkWillBeAccelerated:(id)arg1;
- (BOOL)_canRunInContext:(id)arg1;
- (BOOL)_runInContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)runWithBlock:(CDUnknownBlockType)arg1 context:(id)arg2;
- (BOOL)runInContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithProgram:(id)arg1;

@end

