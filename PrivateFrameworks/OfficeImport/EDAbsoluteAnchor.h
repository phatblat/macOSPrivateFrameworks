//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDAnchor.h>

__attribute__((visibility("hidden")))
@interface EDAbsoluteAnchor : EDAnchor
{
    struct CGPoint mPosition;
    struct CGSize mSize;
}

- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;

@end

