//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Espresso/EspressoInnerProductWeightsForMPS.h>

__attribute__((visibility("hidden")))
@interface EspressoTrainingInnerProductWeightsForMPS : EspressoInnerProductWeightsForMPS
{
    id <MTLBuffer> _weightsBuffer;
    id <MTLBuffer> _biasesBuffer;
}

@property(retain) id <MTLBuffer> biasesBuffer; // @synthesize biasesBuffer=_biasesBuffer;
@property(retain) id <MTLBuffer> weightsBuffer; // @synthesize weightsBuffer=_weightsBuffer;
- (void).cxx_destruct;
- (BOOL)ready;
- (float *)biasTerms;
- (void *)weights;
- (id)initWithParams:(struct inner_product_uniforms)arg1 forMode:(_Bool)arg2;

@end
