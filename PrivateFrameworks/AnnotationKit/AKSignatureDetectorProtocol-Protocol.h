//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AKSignature, NSImage;

@protocol AKSignatureDetectorProtocol
@property(readonly) NSImage *testImage;
@property double borderWidth;
@property double baselinePosition;
- (AKSignature *)detectSignatureInImage:(NSImage *)arg1;
- (AKSignature *)detectSignatureInPixelBuffer:(struct __CVBuffer *)arg1;
@end

