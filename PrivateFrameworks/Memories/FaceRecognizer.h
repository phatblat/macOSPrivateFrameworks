//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/VEiOSSharedObject.h>

__attribute__((visibility("hidden")))
@interface FaceRecognizer : VEiOSSharedObject
{
    BOOL _highAccuracy;
}

+ (id)sharedRecognizer;
@property(nonatomic) BOOL highAccuracy; // @synthesize highAccuracy=_highAccuracy;
- (struct CGRect)containingRectForFaces:(id)arg1 scaleEachFaceRectBy:(double)arg2;
- (struct CGRect)containingRect:(id)arg1;
- (id)facesInImage:(id)arg1;

@end
