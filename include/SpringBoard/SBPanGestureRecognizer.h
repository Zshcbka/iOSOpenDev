/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBFluidSlideGestureRecognizer.h"


@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer {
	float _arcCenter;	// 1200 = 0x4b0
	float _arcSize;	// 1204 = 0x4b4
	BOOL _recognizesHorizontalPanning;	// 1208 = 0x4b8
	BOOL _recognizesVerticalPanning;	// 1209 = 0x4b9
}
- (id)init;	// 0x16cbad
- (id)initForHorizontalPanning;	// 0x16ce85
- (id)initForVerticalPanning;	// 0x16ce19
- (float)computeIncrementalGestureMotion:(SBGestureContextRef)motion;	// 0x16cced
- (void)updateForBeganOrMovedTouches:(SBGestureContextRef)beganOrMovedTouches;	// 0x16cc25
@end
