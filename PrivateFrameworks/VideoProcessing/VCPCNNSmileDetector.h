//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VCPCNNSmileDetector : NSObject
{
}

+ (id)detector;
- (int)detectSmileForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 smile:(char *)arg3;
- (int)computeSmileScore:(float *)arg1;
- (float *)getInputBuffer;

@end
