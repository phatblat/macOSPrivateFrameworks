//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CVMLBlurSignature : NSObject
{
    void *_signatureData;
}

+ (id)computeBlurSignatureForGrayscaleImage:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (void *)getSignatureData;
- (void)setSignatureData:(void *)arg1;
- (id)initWithSignatureData:(void *)arg1;
- (void)dealloc;

@end

