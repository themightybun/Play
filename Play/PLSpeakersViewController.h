//
//  PLSpeakersViewController.h
//  Play
//
//  Created by Nathan Borror on 1/1/13.
//  Copyright (c) 2013 Nathan Borror. All rights reserved.
//

@import UIKit;
@import QuartzCore;
#import "NBReorderableCollectionViewLayout.h"

@interface PLSpeakersViewController : UIViewController <UISplitViewControllerDelegate, UICollectionViewDelegate, NBReorderableCollectionViewDataSource, NBReorderableCollectionViewDelegateFlowLayout>

@end
