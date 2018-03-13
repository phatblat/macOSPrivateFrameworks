//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CVML/CVMLObservation.h>

@class CVMLImageRegistrationSignature;

@interface CVMLImageAlignmentObservation : CVMLObservation
{
    CVMLImageRegistrationSignature *_baseImageSignature;
    CVMLImageRegistrationSignature *_currentImageSignature;
    struct CGAffineTransform _alignmentTransform;
}

@property(retain) CVMLImageRegistrationSignature *currentImageSignature; // @synthesize currentImageSignature=_currentImageSignature;
@property(retain) CVMLImageRegistrationSignature *baseImageSignature; // @synthesize baseImageSignature=_baseImageSignature;
@property struct CGAffineTransform alignmentTransform; // @synthesize alignmentTransform=_alignmentTransform;
- (void).cxx_destruct;

@end

