//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMHeadImageAnnotationView;

@protocol MMHeadImageAnnotationViewDelegate <NSObject>

@optional
- (void)onClickDot:(MMHeadImageAnnotationView *)arg1 AtPoint:(struct CGPoint)arg2;
- (void)onClickCallout:(MMHeadImageAnnotationView *)arg1 AtPoint:(struct CGPoint)arg2;
@end

