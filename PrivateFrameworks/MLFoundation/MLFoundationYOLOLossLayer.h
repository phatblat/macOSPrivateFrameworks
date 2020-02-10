//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MLFoundation/MLFoundationLossLayer.h>

@class MLFoundationYOLOLossDescriptor;

@interface MLFoundationYOLOLossLayer : MLFoundationLossLayer
{
    MLFoundationYOLOLossDescriptor *_yoloLossDescriptor;
}

+ (id)layerWithLossDescriptor:(id)arg1;
+ (id)new;
@property(readonly, nonatomic) MLFoundationYOLOLossDescriptor *yoloLossDescriptor; // @synthesize yoloLossDescriptor=_yoloLossDescriptor;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)computeResultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)initWithLossDescriptor:(id)arg1;
- (id)init;

@end
