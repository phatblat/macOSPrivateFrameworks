//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMLTransformerProtocol.h"

@class NSArray;

@interface SGPipelineTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_transformers;
}

+ (id)withTransformers:(id)arg1;
@property(retain) NSArray *transformers; // @synthesize transformers=_transformers;
- (void).cxx_destruct;
- (id)transform:(id)arg1 stopAfterTransformerWithIndex:(unsigned long long)arg2;
- (id)transform:(id)arg1;
- (id)initWithTransformers:(id)arg1;

@end

