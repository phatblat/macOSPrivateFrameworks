//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PAContentTransform, PADisplay, PAImageDrawStatistics, PAImageLayer, PAOpenGLContext;

@protocol PAImageDrawingDelegate <NSObject>
- (PAImageDrawStatistics *)drawImageLayer:(PAImageLayer *)arg1 inRect:(struct CGRect)arg2 display:(PADisplay *)arg3 transform:(PAContentTransform *)arg4 context:(PAOpenGLContext *)arg5;
@end
