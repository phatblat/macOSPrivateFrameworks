//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPSCNNConvolutionDescriptor, NSString;

@protocol MPSCNNConvolutionDataSource <NSObject>
- (NSString *)label;
- (void)purge;
- (BOOL)load;
- (float *)biasTerms;
- (void *)weights;
- (MPSCNNConvolutionDescriptor *)descriptor;
- (unsigned int)dataType;

@optional
- (float *)lookupTableForUInt8Kernel;
-     // Error parsing type: ^16@0:8, name: rangesForUInt8Kernel
@end
