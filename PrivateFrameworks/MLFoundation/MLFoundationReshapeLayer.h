//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MLFoundation/MLFoundationLayer.h>

#import "MLFoundationLayerCompiling.h"

@class NSArray, NSString;

@interface MLFoundationReshapeLayer : MLFoundationLayer <MLFoundationLayerCompiling>
{
    NSArray *_shape;
}

+ (id)layerWithShape:(id)arg1;
+ (id)new;
@property(readonly, nonatomic) NSArray *shape; // @synthesize shape=_shape;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (unsigned long long)computeResultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)initWithShape:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
