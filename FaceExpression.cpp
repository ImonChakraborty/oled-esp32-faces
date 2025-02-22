#include "FaceExpression.h"
#include "Face.h"

FaceExpression::FaceExpression(Face& face) : _face(face)
{
}

void FaceExpression::ClearVariations()
{
	_face.RightEye.Variation1.Clear();
	_face.RightEye.Variation2.Clear();
	_face.LeftEye.Variation1.Clear();
	_face.LeftEye.Variation2.Clear();
	_face.RightEye.Variation1.Animation.Restart();
	_face.LeftEye.Variation1.Animation.Restart();
}

void FaceExpression::GoTo_Normal()
{
	ClearVariations();

	_face.RightEye.Variation1.Values.Height = 3;
	_face.RightEye.Variation2.Values.Width = 1;
	_face.LeftEye.Variation1.Values.Height = 2;
	_face.LeftEye.Variation2.Values.Width = 2;
	_face.RightEye.Variation1.Animation.SetTriangle(1000, 0);
	_face.LeftEye.Variation1.Animation.SetTriangle(1000, 0);

	_face.RightEye.TransitionTo(Preset_Normal);
	_face.LeftEye.TransitionTo(Preset_Normal);

}

void FaceExpression::GoTo_Angry()
{
	ClearVariations();
	_face.RightEye.Variation1.Values.OffsetY = 2;
	_face.LeftEye.Variation1.Values.OffsetY = 2;
	_face.RightEye.Variation1.Animation.SetTriangle(300, 0);
	_face.LeftEye.Variation1.Animation.SetTriangle(300, 0);

	_face.RightEye.TransitionTo(Preset_Angry);
	_face.LeftEye.TransitionTo(Preset_Angry);
}

void FaceExpression::GoTo_Glee()
{
	ClearVariations();
	_face.RightEye.Variation1.Values.OffsetY = 5;
	_face.LeftEye.Variation1.Values.OffsetY = 5;
	_face.RightEye.Variation1.Animation.SetTriangle(300, 0);
	_face.LeftEye.Variation1.Animation.SetTriangle(300, 0);

	_face.RightEye.TransitionTo(Preset_Glee);
	_face.LeftEye.TransitionTo(Preset_Glee);
}

void FaceExpression::GoTo_Happy()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Happy);
	_face.LeftEye.TransitionTo(Preset_Happy);
}

void FaceExpression::GoTo_Sad()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Sad);
	_face.LeftEye.TransitionTo(Preset_Sad);
}

void FaceExpression::GoTo_Worried()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Worried);
	_face.LeftEye.TransitionTo(Preset_Worried_Alt);
}

void FaceExpression::GoTo_Focused()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Focused);
	_face.LeftEye.TransitionTo(Preset_Focused);
}

void FaceExpression::GoTo_Annoyed()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Annoyed);
	_face.LeftEye.TransitionTo(Preset_Annoyed_Alt);
}

void FaceExpression::GoTo_Surprised()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Surprised);
	_face.LeftEye.TransitionTo(Preset_Surprised);
}

void FaceExpression::GoTo_Skeptic()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Skeptic);
	_face.LeftEye.TransitionTo(Preset_Skeptic_Alt);
}

void FaceExpression::GoTo_Frustrated()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Frustrated);
	_face.LeftEye.TransitionTo(Preset_Frustrated);
}

void FaceExpression::GoTo_Unimpressed()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Unimpressed);
	_face.LeftEye.TransitionTo(Preset_Unimpressed_Alt);
}

void FaceExpression::GoTo_Sleepy()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Sleepy);
	_face.LeftEye.TransitionTo(Preset_Sleepy_Alt);
}

void FaceExpression::GoTo_Suspicious()
{
	ClearVariations();
	_face.RightEye.TransitionTo(Preset_Suspicious);
	_face.LeftEye.TransitionTo(Preset_Suspicious_Alt);
}

void FaceExpression::GoTo_Squint()
{
	ClearVariations();

	_face.LeftEye.Variation1.Values.OffsetX = 6;
	_face.LeftEye.Variation2.Values.OffsetY = 6;

	_face.RightEye.TransitionTo(Preset_Squint);
	_face.LeftEye.TransitionTo(Preset_Squint_Alt);

}

void FaceExpression::GoTo_Furious()
{
	ClearVariations();

	_face.RightEye.TransitionTo(Preset_Furious);
	_face.LeftEye.TransitionTo(Preset_Furious);
}

void FaceExpression::GoTo_Scared()
{
	ClearVariations();

	_face.RightEye.TransitionTo(Preset_Scared);
	_face.LeftEye.TransitionTo(Preset_Scared);
}

void FaceExpression::GoTo_Awe()
{
	ClearVariations();

	_face.RightEye.TransitionTo(Preset_Awe);
	_face.LeftEye.TransitionTo(Preset_Awe);
}
