//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class NSArray;

@interface MsgImageFilter : CIFilter
{
    NSArray *kernels;
}

+ (void)initialize;
+ (id)ciFilterAttributes;
+ (id)kernelArray;
+ (id)filterName;
@property(retain) NSArray *kernels; // @synthesize kernels;
- (void).cxx_destruct;
- (id)init;

@end

